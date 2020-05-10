
strange = "123\'xyz"

main :: String
main = map chr (map (1+) (map ord "abcDEF012"))
