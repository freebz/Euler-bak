#!/usr/bin/ruby

f20 = (1..20).reduce(:*)
p (1..40).reduce(:*) / f20 / f20
