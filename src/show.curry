
import FlatCurry.Pretty (ppProg, defaultOptions)
import ICurry.Pretty (ppIProg)
import Text.Pretty (pPrint)
import Text.PrettyImpl
import ICurry.Files (readICurryFile)
import FlatCurry.Files (readFlatCurryFile)
import FlatCurry.Types


icurry :: String -> IO ()
icurry name = readICurryFile name >>= putStrLn . pPrint . ppIProg

fcurry :: String -> IO ()
fcurry name = readFlatCurryFile name >>= putStrLn . pPrint . ppProg defaultOptions
