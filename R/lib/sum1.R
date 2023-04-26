num1 <- as.integer(3)
num2 <- as.integer(4)
num3 <- as.integer(4)

# Call the sum function with three arguments
result <- .Call("R_swig_add", num1, num2, num3, PACKAGE = "openmtpk")

# Print the result
cat("Sum:", result, "\n")