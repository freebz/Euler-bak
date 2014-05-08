#!/usr/bin/ruby

ROWS = 15

File.open("data.txt") do |f|
  p f.readlines.reverse.map{|i|
    i.split(/\s/).map(&:to_i)
  }.reduce{|a, b|
    b.map.with_index do |item, i|
      item + (a[i] > a[i+1] ? a[i] : a[i+1])
    end
  }
end
