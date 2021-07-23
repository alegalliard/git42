#!/bin/bash
#expressão regular equivalente que fiz no regex101: ((\w{2}):?){6}

ifconfig | grep --only-matching --extended-regexp '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'