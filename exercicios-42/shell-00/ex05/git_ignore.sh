#!/bin/bash

#find -xtype f | git check-ignore --stdin
#git ls-files --others --ignored --exclude-standard
#git ls-files $(git rev-parse --show-toplevel) -i --exclude-standard --others
git ls-files --others --ignored --exclude-standard
