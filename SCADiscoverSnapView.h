/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:04 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCADiscoverSnapViewBase.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCADiscoverSnapView : SCADiscoverSnapViewBase <MapSerializable, NSCopying> {

	NSNumber* fullView;
	NSNumber* withSubscription;
	NSNumber* viewLocation;
	NSNumber* editionEnd;
	NSNumber* snapTimeSec;
	NSNumber* mediaDisplayTimeSec;
	long long readState;
	long long viewSource;
	long long mediaType;
	long long bandwidthClass;
	NSString* sortOrderId;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(BOOL)getFullView;
-(void)setFullView:(BOOL)arg1 ;
-(long long)getViewSource;
-(void)setViewSource:(long long)arg1 ;
-(BOOL)getWithSubscription;
-(void)setWithSubscription:(BOOL)arg1 ;
-(long long)getMediaType;
-(double)getSnapTimeSec;
-(void)setSnapTimeSec:(double)arg1 ;
-(double)getMediaDisplayTimeSec;
-(void)setMediaDisplayTimeSec:(double)arg1 ;
-(id)getSortOrderId;
-(void)setSortOrderId:(id)arg1 ;
-(long long)getViewLocation;
-(void)setViewLocation:(long long)arg1 ;
-(long long)getReadState;
-(void)setReadState:(long long)arg1 ;
-(BOOL)getEditionEnd;
-(void)setEditionEnd:(BOOL)arg1 ;
-(long long)getBandwidthClass;
-(void)setBandwidthClass:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(id)asDictionary;
@end

