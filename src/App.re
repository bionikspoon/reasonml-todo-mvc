[@react.component]
let make = (~name) => {
  <>
    <h1> {ReasonReact.string("Hello " ++ name ++ "!")} </h1>
    <div>
      {ReasonReact.string("Look ")}
      <a href="https://parceljs.org" target="_blank" rel="noopener noreferrer">
        {ReasonReact.string("here")}
      </a>
      {ReasonReact.string(" for more info about Parcel.")}
    </div>
  </>;
};