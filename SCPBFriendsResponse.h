/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSMutableArray, NSString, NSMutableDictionary;

@interface SCPBFriendsResponse : GPBMessage

@property (nonatomic,retain) NSMutableArray * friendsArray; 
@property (nonatomic,readonly) unsigned long long friendsArray_Count; 
@property (nonatomic,copy) NSString * friendsSyncToken; 
@property (nonatomic,copy) NSString * friendsSyncType; 
@property (nonatomic,retain) NSMutableArray * addedFriendsArray; 
@property (nonatomic,readonly) unsigned long long addedFriendsArray_Count; 
@property (nonatomic,retain) NSMutableArray * bestsArray; 
@property (nonatomic,readonly) unsigned long long bestsArray_Count; 
@property (nonatomic,retain) NSMutableDictionary * extraFriendmojiMutableDict; 
@property (nonatomic,readonly) unsigned long long extraFriendmojiMutableDict_Count; 
@property (nonatomic,retain) NSMutableDictionary * extraFriendmojiReadOnlyDict; 
@property (nonatomic,readonly) unsigned long long extraFriendmojiReadOnlyDict_Count; 
+(id)descriptor;
@end

