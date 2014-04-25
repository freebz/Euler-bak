#!/usr/bin/ruby

INFINITY = 1.0/0
MAX = 4000000


def fib(n)
  case n
    when 1..2 then n
  else
    fib(n-1) + fib(n-2)
  end
end


p (1..INFINITY).lazy.map{ |n|
  fib(n) 
}.take_while{ |n|
  n < MAX
}.select(&:even?).inject(:+)


