## Setup dependencies

To use the peripheral generator, you first need to install the dependencies:

1. pip install poetry
1. cd tools
1. poetry install
1. cd hardware
1. poetry run ../hardware_generator.py [path_to_svd] -o
   - **example**: poetry run python ../hardware_generator.py ../cmsis-svd-data/data/STMicro/STM32L1xx.svd -o
