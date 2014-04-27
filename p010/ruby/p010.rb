#!/usr/bin/ruby

require 'mathn'

LIMIT = 2_000_000

p Prime.each(LIMIT).reduce(:+)
