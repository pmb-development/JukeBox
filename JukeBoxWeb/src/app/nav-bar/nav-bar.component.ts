import { Component, OnInit } from '@angular/core';
import { Router, NavigationStart } from '@angular/router';

@Component({
  selector: 'app-nav-bar',
  templateUrl: './nav-bar.component.html',
  styleUrls: ['./nav-bar.component.css']
})
export class NavBarComponent implements OnInit {

  constructor(private router: Router) {
  }

  public isCollapsed = true;

  public ngOnInit() {
      this.router.events.subscribe((evt) => {
          if (evt instanceof NavigationStart) {
              this.isCollapsed = true;
          }
      });
  }

}
