let component = ReasonReact.statelessComponent("HelloWorld");

Js.log(component);

let make = (~message, _children) => {
  ...component,
  render: _self => <h1> (ReasonReact.string(message)) </h1>,
};
