#!/usr/bin/ruby

ROWS = 20
COLS = 20
UNIT = 4

File.open("data.txt") do |f|
  data = f.readlines.map{|line|
    line.split(/\s/).map(&:to_i)
  }

  result = 0

  (0...ROWS).each do |i|
    (0...COLS).each do |j|
      sub = [1, 1, 1, 1]
      (0...UNIT).each do |k|
        sub[0] *= data[i][j+k] if j < COLS - UNIT
        sub[1] *= data[i+k][j] if i < ROWS - UNIT
        if i < ROWS - UNIT and j < COLS - UNIT
          sub[2] *= data[i+k][j+k]
          sub[3] *= data[i+k][j+UNIT-k];
        end
      end
      result = sub.max if sub.max > result
    end
  end
  p result
end

