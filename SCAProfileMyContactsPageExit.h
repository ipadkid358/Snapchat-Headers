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

@class NSNumber;

@interface SCAProfileMyContactsPageExit : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* contactFoundCount;
	NSNumber* contactFoundCountWithDisplayPic;
	NSNumber* nonSnapchatterCount;
	NSNumber* friendAddCount;
	NSNumber* friendAddCountWithDisplayPic;
	NSNumber* snapchatterAddInSearchCount;
	NSNumber* contactInviteCount;
	NSNumber* nonSnapchatterInviteInSearchCount;
	long long destination;
	long long destinationPage;
	long long verificationType;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getDestinationPage;
-(void)setDestinationPage:(long long)arg1 ;
-(long long)getDestination;
-(long long)getContactFoundCount;
-(void)setContactFoundCount:(long long)arg1 ;
-(long long)getContactFoundCountWithDisplayPic;
-(void)setContactFoundCountWithDisplayPic:(long long)arg1 ;
-(long long)getFriendAddCount;
-(void)setFriendAddCount:(long long)arg1 ;
-(long long)getFriendAddCountWithDisplayPic;
-(void)setFriendAddCountWithDisplayPic:(long long)arg1 ;
-(long long)getVerificationType;
-(void)setVerificationType:(long long)arg1 ;
-(long long)getNonSnapchatterCount;
-(void)setNonSnapchatterCount:(long long)arg1 ;
-(long long)getSnapchatterAddInSearchCount;
-(void)setSnapchatterAddInSearchCount:(long long)arg1 ;
-(long long)getContactInviteCount;
-(void)setContactInviteCount:(long long)arg1 ;
-(long long)getNonSnapchatterInviteInSearchCount;
-(void)setNonSnapchatterInviteInSearchCount:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDestination:(long long)arg1 ;
-(id)asDictionary;
@end

