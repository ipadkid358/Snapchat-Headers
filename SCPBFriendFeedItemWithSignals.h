/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCPBFriendFeedItem, NSMutableDictionary, NSMutableArray;

@interface SCPBFriendFeedItemWithSignals : GPBMessage

@property (nonatomic,retain) SCPBFriendFeedItem * feedItem; 
@property (assign,nonatomic) BOOL hasFeedItem; 
@property (nonatomic,retain) NSMutableDictionary * signals; 
@property (nonatomic,readonly) unsigned long long signals_Count; 
@property (nonatomic,retain) NSMutableArray * serverSideSignalsArray; 
@property (nonatomic,readonly) unsigned long long serverSideSignalsArray_Count; 
+(id)descriptor;
@end

