#!/usr/bin/ruby

LIMIT = 1000

f1, f2, n = 1, 1, 1

until f1.to_s.length >= LIMIT do
  f1, f2, n = f2, f1 + f2, n + 1
end

p n
