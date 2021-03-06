type t;

[@bs.new] external make: unit => t = "TextDecoder";
[@bs.new] external make1: string => t = "TextDecoder";
[@bs.new] external make2: (string, {. "fatal": bool}) => t = "TextDecoder";

[@bs.get] external encoding: t => string = "encoding";
[@bs.get] external fatal: t => bool = "fatal";
[@bs.get] external ignoreBOM: t => bool = "ignoreBOM";

type decodeOptions = {. "stream": bool};

[@bs.send] external decode: t => string = "decode";

[@bs.send]
external decodeArrayBuffer: (t, Js.Typed_array.ArrayBuffer.t) => string =
  "decode";

[@bs.send]
external decodeArrayBufferView: (t, PWA_ArrayBufferView.t) => string =
  "decode";

external decodeArrayBuffer2:
  (t, Js.Typed_array.ArrayBuffer.t, decodeOptions) => string =
  "decode";

external decodeArrayBufferView2:
  (t, PWA_ArrayBufferView.t, decodeOptions) => string =
  "decode";