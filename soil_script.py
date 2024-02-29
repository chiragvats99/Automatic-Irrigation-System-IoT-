import serial
import time

# Modify the COM port based on your Arduino connection
ser = serial.Serial('COM5', 9600, timeout=1)

while True:
    print("\n")
    print("Options:")
    print("1: Read Soil Moisture")
    print("2: Turn On LED")
    print("3: Turn Off LED")
    print("4: Get LED Status")
    print("5: Exit")
    option = int(input("Enter option (1-5): "))

    ser.write(bytes(str(option), 'utf-8'))  # Send the chosen option to Arduino
    time.sleep(0.1)  # Give Arduino time to process

    if option == 5:
        break  # Exit the loop if user chooses to exit

    response = ser.readline().decode('utf-8').strip()  # Read response from Arduino
    print(response)  # Display the response in the Python terminal

print("Exiting program.")