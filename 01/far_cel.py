# 0 to 300, steps of 20
print_conv = lambda far: print(f"{far:3.0f} {(5/9) * (far-32):6.1f}")

far = 0
while far <= 300:
    print_conv(far)
    far += 20

print()

for far in range(0, 320, 20):
    print_conv(far)
