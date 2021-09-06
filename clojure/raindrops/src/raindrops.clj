(ns raindrops)

(defn convert [number]
  (let [drops (apply str
                     (map (fn [factor string]
                            (if (== (mod number factor) 0)
                              string nil))
                          [3 5 7]
                          ["Pling" "Plang" "Plong"]))]
    (if (= drops "")
      (str number) drops)))
