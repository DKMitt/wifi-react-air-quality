import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';

class App extends Component {
  render() {
    return (
      <div className="App">
        <div className="App-header">
          <img src={logo} className="App-logo" alt="logo" />
          <h2>WiFi React.JS Air Quality App with Data Logging</h2>
        </div>
        <p className="App-intro">
          New Project, Updated 12/18/2017
        </p>
      </div>
    );
  }
}

export default App;
