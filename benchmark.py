import time
import tensorflow as tf
from argparse import ArgumentParser

arg_parser = ArgumentParser(description='Parse args')
arg_parser.add_argument('-m', '--model_directory', type=str, required=True,
                        help='Specify the model directory or .pb file path.')
args = arg_parser.parse_args()

def evaluate(model):
    batch_size = 2  # Updated batch size
    warmup = 5
    iteration = 10

    latency_list = []
    for idx in range(iteration + warmup):
        # Generate random input data
        input_shape = (batch_size, 224, 224, 3)  # Updated input shape
        output_shape = (224, 224)  # Updated output shape
        input_data = tf.random.uniform(shape=input_shape, minval=0, maxval=255, dtype=tf.float32)
        resized_data = tf.image.resize(input_data, size=output_shape)
        input_data = tf.cast(resized_data, dtype=tf.uint8)

        start = time.time()
        output_dict = model.signatures['serving_default'](tf.constant(input_data))
        end = time.time()

        if idx >= warmup:
            latency_list.append(end - start)
            iteration_time = end - start
            print("Iteration: {:d} - Inference Time: {:.3f} sec".format(idx, iteration_time))

    latency = sum(latency_list) / len(latency_list) * 1000  # in milliseconds
    throughput = batch_size / (latency / 1000)  # in images per second

    print("Batch size = {}".format(batch_size))
    print("Latency: {:.3f} ms".format(latency))
    print("Throughput: {:.3f} images/sec".format(throughput))

    
def main():
    model_path = args.model_directory

    # Load the model
    if model_path.endswith('.pb'):
        model = tf.saved_model.load(model_path)
    else:
        model = tf.saved_model.load(model_path + '/')

    # Print available signatures
    print("Available Signatures:")
    print(model.signatures)

    evaluate(model)

if __name__ == "__main__":
    main()
