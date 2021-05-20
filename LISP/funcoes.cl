(defun fatorial(n) 
    (if (= n 0) 
        1 
        (* n (fatorial (- n 1)))
    )
)

(defun fibo(n)
    (cond 
        ((= n 0) 0)
        ((= n 1) 1)
        ((> n 1) (+ (fibo (- n 2)) (fibo (- n 1))))
    )
)

;; (defun mostrafat(n) 
;;     (format T "O fatorial de ~d é ~d" n (fatorial n))
;; )

;; (princ "Informe N: ")
;; (mostrafat (read))

(princ "Informe N: ")
((lambda (n) (format T "O fatorial de ~d é ~d" n (fatorial n))) (read))

