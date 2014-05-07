#!/usr/bin/ruby

LIMIT = 1000

def toStr(n)
  s1 = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen"]
  s2 = %w[twenty thirty fourty fifty sixfy seventy eighty ninty]
  return "one thousand" if n == 1000
  if n >= 100
    return toStr(n/100)+" hundred" if n % 100 == 0
    return toStr(n/100)+" hundred and " + toStr(n % 100)
  end
  return s2[n/10 - 2] + toStr(n % 10) if n >= 20
  return s1[n]
end

p (1..LIMIT).reduce(0){|x, n| x + toStr(n).delete(" ").size }
