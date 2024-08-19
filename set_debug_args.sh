#!/bin/bash
# Prompt for arguments
#!/bin/bash

# Prompt for arguments
read -p "Enter the first argument: " ARG1
read -p "Enter the second argument: " ARG2
read -p "Enter the third argument: " ARG3

# Export the arguments as environment variables
export ARG1
export ARG2
export ARG3

# Confirm environment variables (for debugging)
echo "ARG1=$ARG1"
echo "ARG2=$ARG2"
echo "ARG3=$ARG3"
