static const char *string_config= "\
[general]\n\
second_usb_serial_enable = false # This enables a second USB serial port\n\
kill_button_enable = true # Set to true to enable a kill button\n\
kill_button_pin = 2.12 # Kill button pin. default is same as pause button 2.12 (2.11 is another good choice)\n\
uart0.baud_rate = 115200 # Baud rate for the default hardware ( UART ) serial port\n\
leds_disable = true             # Disable using leds after config loaded\n\
play_led_disable = true             # Disable the play led\n\
\n\
[motion control]\n\
default_feed_rate = 4000 # Default speed (mm/minute) for G1/G2/G3 moves\n\
default_seek_rate = 4000 # Default speed (mm/minute) for G0 moves\n\
mm_per_arc_segment = 0.0 # Fixed length for line segments that divide arcs, 0 to disable\n\
mm_max_arc_error = 0.01 # The maximum error for line segments that divide arcs 0 to disable\n\
arc_correction = 5\n\
default_acceleration = 3000 # Acceleration in mm/second/second.\n\
junction_deviation = 0.05 # See http://smoothieware.org/motion-control#junction-deviation\n\
default_acceleration = 100.0 # default acceleration in mm/sec²\n\
arm_solution = cartesian\n\
\n\
[planner]\n\
junction_deviation = 0.05\n\
#z_junction_deviation = 0.0\n\
minimum_planner_speed = 0\n\
planner_queue_size = 32\n\
\n\
[actuator]\n\
alpha.steps_per_mm = 80 # Steps per mm for alpha ( X ) stepper\n\
alpha.step_pin = p2_9 # Pin for alpha stepper step signal\n\
alpha.dir_pin = P3_2 # Pin for alpha stepper direction, add '!' to reverse direction\n\
alpha.en_pin = nc # Pin for alpha enable pin\n\
alpha.max_rate = 30000.0 # Maximum rate in mm/min\n\
x.axis_max_speed = 30000 # Maximum speed in mm/min\n\
\n\
beta.steps_per_mm = 80 # Steps per mm for beta ( Y ) stepper\n\
beta.step_pin = p3_1 # Pin for beta stepper step signal\n\
beta.dir_pin = p2_12 # Pin for beta stepper direction, add '!' to reverse direction\n\
beta.en_pin = nc # Pin for beta enable\n\
beta.max_rate = 30000.0 # Maxmimum rate in mm/min\n\
y.axis_max_speed = 30000 # Maximum speed in mm/min\n\
\n\
gamma.steps_per_mm = 1600 # Steps per mm for gamma ( Z ) stepper\n\
gamma.step_pin = p2_13 # Pin for gamma stepper step signal\n\
gamma.dir_pin = p7_1 # Pin for gamma stepper direction, add '!' to reverse direction\n\
gamma.en_pin = nc # Pin for gamma enable\n\
gamma.max_rate = 300.0 # Maximum rate in mm/min\n\
z.axis_max_speed = 300 # Maximum speed in mm/min\n\
gamma.acceleration = 500  # overrides the default acceleration for this axis\n\
\n\
[switch]\n\
fan.enable = false # Enable this module\n\
fan.input_on_command = M106 # Command that will turn this switch on\n\
fan.input_off_command = M107 # Command that will turn this switch off\n\
fan.output_pin = 2.6 # Pin this module controls\n\
fan.output_type = pwm # PWM output settable with S parameter in the input_on_comand\n\
\n\
misc.enable = false             # Enable this module\n\
misc.input_on_command = M42              # Command that will turn this switch on\n\
misc.input_off_command = M43              # Command that will turn this switch off\n\
misc.output_pin = 2.4              # Pin this module controls\n\
misc.output_type = digital          # Digital means this is just an on or off pin\n\
\n\
led1.enable            = true\n\
led1.input_on_command  = M1\n\
led1.input_off_command = M2\n\
led1.output_pin        = gpio1_0\n\
led1.output_type       = digital\n\
\n\
led2.enable            = true\n\
led2.input_on_command  = M3\n\
led2.input_off_command = M4\n\
led2.output_pin        = gpio3_3\n\
led2.output_type       = sigmadeltapwm\n\
\n\
but1.enable             = true                     # Enable this module\n\
but1.input_pin          = gpio0_7!                 # button\n\
but1.output_on_command  = M1                       # command to send\n\
but1.output_off_command = M2                       # command to send\n\
but1.input_pin_behavior = toggle\n\
";