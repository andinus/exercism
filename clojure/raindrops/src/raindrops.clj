(ns raindrops)

(defn convert [number]
  (def drops "")

  (if (== (mod number 3) 0)
    (def drops (str drops "Pling")))
  (if (== (mod number 5) 0)
    (def drops (str drops "Plang")))
  (if (== (mod number 7) 0)
    (def drops (str drops "Plong")))

  (if (= drops "")
    (def drops (str number)))
  drops)
