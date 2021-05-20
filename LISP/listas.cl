(defun mostralista (l)
    (when l 
        (princ (car l))
        (terpri)
        (mostralista (cdr l))
    )
)

(mostralista '(10 20 30 40 50))