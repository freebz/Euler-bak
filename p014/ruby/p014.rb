#!/usr/bin/ruby

LIMIT = 1_000_000

def hailstoneSeq(n)
  return 1 if n == 1
  if n.even?
    hailstoneSeq(n/2) + 1
  else
    hailstoneSeq(3*n+1) + 1
  end
end

p (1..LIMIT).map{|n|
  [hailstoneSeq(n), n]
}.max.last
