import { Component } from '@angular/core';

@Component({
  selector: 'app-title',
  templateUrl: './title.component.html',
  styleUrls: ['./title.component.css']
})
export class TitleComponent {

  public title: string;
  private hour: number;

  constructor() {
      this.hour = new Date().getHours();
      if (this.hour > 5 && this.hour < 12) {
          this.title = 'Good Morning! Time for Music!';
      } else if (this.hour >= 12 && this.hour < 19) {
          this.title = 'Good Afternoon!';
      } else if (this.hour >= 19 && this.hour < 21) {
          this.title = 'Good Evening! Time for a beer';
      } else {
          this.title = 'Good Evening! It\'s Hammer Time';
      }
  }
}
