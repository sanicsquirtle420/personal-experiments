import math # 09/13/24
# I respectfully "borrowed" this program from
# ChatGPT because I needed help with a physics question.

# Given values
v0 = 17  # initial velocity in m/s
theta = 33  # angle in degrees
x = 57  # horizontal distance in meters
g = 9.8  # acceleration due to gravity in m/s^2

# Convert theta to radians
theta_rad = math.radians(theta)

# Calculate the horizontal component of the initial velocity
v0x = v0 * math.cos(theta_rad)

# Calculate the time of flight
t = x / v0x

# Calculate the vertical component of the initial velocity
v0y = v0 * math.sin(theta_rad)

# Using the vertical motion equation to solve for the height of the building (y0)
y0 = (0.5 * g * t**2) - (v0y * t)

print(f"t is {t:.4} and y0 is {y0:.4}")
