/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAServerEventBase.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface SCAStorySnapViewServer : SCAServerEventBase <MapSerializable, NSCopying> {

	NSNumber* isFriendView;
	NSNumber* isPublicStory;
	NSNumber* isOfficialStory;
	NSString* viewerId;
	NSString* storySnapId;
	NSString* ghost_viewer_id;
	NSDate* clientTs;

}
-(id)getClientTs;
-(void)setClientTs:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getStorySnapId;
-(void)setStorySnapId:(id)arg1 ;
-(BOOL)getIsFriendView;
-(void)setIsFriendView:(BOOL)arg1 ;
-(BOOL)getIsPublicStory;
-(void)setIsPublicStory:(BOOL)arg1 ;
-(BOOL)getIsOfficialStory;
-(void)setIsOfficialStory:(BOOL)arg1 ;
-(id)getViewerId;
-(void)setViewerId:(id)arg1 ;
-(id)getGhost_viewer_id;
-(void)setGhost_viewer_id:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
@end

