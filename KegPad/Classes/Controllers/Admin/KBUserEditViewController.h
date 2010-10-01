//
//  KBUserEditViewController.h
//  KegPad
//
//  Created by Gabriel Handford on 9/27/10.
//  Copyright 2010 Yelp. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import "KBUIFormViewController.h"
#import "KBUIFormTextField.h"
#import "KBUser.h"

@class KBUserEditViewController;

@protocol KBUserEditViewControllerDelegate <NSObject>
- (void)userEditViewController:(KBUserEditViewController *)userEditViewController didAddUser:(KBUser *)user;
@end

@interface KBUserEditViewController : KBUIFormViewController { 
  KBUIFormTextField *firstNameField_;
  KBUIFormTextField *lastNameField_;  
  KBUIFormTextField *tagField_;
}

@property (assign, nonatomic) id<KBUserEditViewControllerDelegate> delegate;

- (id)initWithTitle:(NSString *)title buttonTitle:(NSString *)buttonTitle;

- (void)setTagId:(NSString *)tagId editable:(BOOL)editable;

@end


@interface KBUserAddNavigationController : UINavigationController {
  KBUserEditViewController *userEditViewController_;
}

@property (retain, nonatomic) KBUserEditViewController *userEditViewController;

@end