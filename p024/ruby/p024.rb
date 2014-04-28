#!/usr/bin/ruby

SIZE = 9
LIMIT = 1_000_000

p (0..SIZE).to_a.permutation.lazy.drop(LIMIT-1).take(1).force.join
