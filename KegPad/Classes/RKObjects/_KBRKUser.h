//
//  _KBRKUser.h
//  KegPad
//
//  Created by John Boiles on 5/15/11.
//  Copyright 2011 Yelp. All rights reserved.
//  Auto-generated from KegBot.org docs
//
//  This object models a User in the system.

#import <RestKit/RestKit.h>
#import <RestKit/CoreData/CoreData.h>

@interface _KBRKUser : NSObject {
  NSString *username;
  NSString *mugshotUrl;
  NSNumber *isActive;
}

//! Unique identifier for the user.
@property (retain, nonatomic) NSString *username;
//! URL to the mugshot for this user.
@property (retain, nonatomic) NSString *mugshotUrl;
//! True if this is an active user.
@property (retain, nonatomic) NSNumber *isActive;

@end
