#! /bin/bash

git ls-files --ignored --exclude-from=.git/info/exclude
git ls-files -i --exclude-from=.git/info/exclude

git ls-files --others --ignored --exclude-standard
git ls-files -o -i --exclude-standard
