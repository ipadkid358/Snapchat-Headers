/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class IMPBusinessProfile, NSMutableArray, IMPBusinessProfileUserData, IMPBusinessStory;

@interface IMPBusinessProfileAndUserData : GPBMessage

@property (nonatomic,retain) IMPBusinessProfile * businessProfile; 
@property (assign,nonatomic) BOOL hasBusinessProfile; 
@property (assign,nonatomic) BOOL isSubscribed; 
@property (nonatomic,retain) NSMutableArray * allowedActionsArray; 
@property (nonatomic,readonly) unsigned long long allowedActionsArray_Count; 
@property (nonatomic,retain) NSMutableArray * pendingRoleInvitesArray; 
@property (nonatomic,readonly) unsigned long long pendingRoleInvitesArray_Count; 
@property (nonatomic,retain) IMPBusinessProfileUserData * userData; 
@property (assign,nonatomic) BOOL hasUserData; 
@property (nonatomic,retain) IMPBusinessStory * story; 
@property (assign,nonatomic) BOOL hasStory; 
+(id)descriptor;
@end
