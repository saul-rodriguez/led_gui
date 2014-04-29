#gpio mode works with wiringPi numbering
#gpio export works with (GPIO) numbering

#led in pin 0(17)
gpio mode 0 out 

#switch in pin 2(27), activate pull-up res.
gpio mode 2 in
gpio mode 2 up
gpio edge 2 falling

# export the pin
gpio export 17 out
gpio export 27 in
