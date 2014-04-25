#!/usr/bin/ruby

print (1...1000).select { |i|
  i % 3 == 0 or i % 5 == 0
}.inject(0) { |result, i|
  result += i
}
