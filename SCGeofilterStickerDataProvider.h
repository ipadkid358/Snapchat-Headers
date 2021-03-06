/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGeofilterStickerDataProvider.h>

@protocol SCGeofilterStickerDataProvider <NSObject>
@required
-(id)initWithUserSession:(id)arg1;
-(BOOL)shouldUpdateHomeTabGeofilters:(unsigned long long)arg1;
-(id)geofilterStickersWithFilterContextData:(id)arg1;
-(id)geofilterStickersForHomeTabWithFilterContextData:(id)arg1 maxNumOfStickers:(unsigned long long)arg2;

@end


@class NSMutableDictionary, NSMutableArray, SCUserSession, NSString;

@interface SCGeofilterStickerDataProvider : NSObject <SCGeofilterStickerDataProvider> {

	NSMutableDictionary* _geoFilterStickers;
	NSMutableArray* _homeTabGeoFilterStickersArray;
	SCUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEligibleForFilterMenu:(id)arg1 ;
+(id)filterMenuScoreForFilter:(id)arg1 geoGroupScore:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 ;
-(BOOL)shouldUpdateHomeTabGeofilters:(unsigned long long)arg1 ;
-(id)geofilterStickersWithFilterContextData:(id)arg1 ;
-(id)geofilterStickersForHomeTabWithFilterContextData:(id)arg1 maxNumOfStickers:(unsigned long long)arg2 ;
@end

