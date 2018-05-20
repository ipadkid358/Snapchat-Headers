/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:06 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCAProfileUserFriending : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* hasDisplayName;
	NSNumber* withDisplayPic;
	long long method;
	long long action;
	long long pageName;
	long long addSource;
	long long storyType;
	NSString* page;

}
-(void)setAddSource:(long long)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getPage;
-(long long)getAction;
-(long long)getStoryType;
-(long long)getPageName;
-(void)setPageName:(long long)arg1 ;
-(long long)getAddSource;
-(BOOL)getWithDisplayPic;
-(void)setWithDisplayPic:(BOOL)arg1 ;
-(BOOL)getHasDisplayName;
-(long long)getMethod;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(long long)arg1 ;
-(void)setPage:(id)arg1 ;
-(void)setHasDisplayName:(BOOL)arg1 ;
-(id)asDictionary;
-(void)setMethod:(long long)arg1 ;
-(void)setStoryType:(long long)arg1 ;
@end

