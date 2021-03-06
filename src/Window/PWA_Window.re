type t = Dom.window;

include PWA_EventTarget.Make({
  type nonrec t = t;
});

[@bs.get] external navigator: t => PWA_Navigator.t = "navigator";
[@bs.get] external document: t => PWA_Document.t = "document";

[@bs.send] external alert: (t, string) => unit = "alert";
[@bs.send] external alertAny: (t, 'a) => unit = "alert";