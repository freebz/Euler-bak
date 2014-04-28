#!/usr/bin/ruby

File.open("data.txt") do |f|
  p f.readlines.map{|line| line.to_i}.reduce(:+).to_s[0...10]
end
