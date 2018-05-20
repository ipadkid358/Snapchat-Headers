/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserNotTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface SCASearchrankingResults : SCAUserNotTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* searchQueryId;
	NSNumber* loadedFromCache;
	long long source;
	NSString* searchSessionId;
	NSString* searchQueryText;
	NSString* searchResults;
	NSString* resultCacheInformation;
	NSString* searchExperimentIds;
	NSDate* searchResultTimestamp;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getSource;
-(long long)getSearchQueryId;
-(void)setSearchQueryId:(long long)arg1 ;
-(id)getSearchSessionId;
-(void)setSearchSessionId:(id)arg1 ;
-(id)getSearchQueryText;
-(void)setSearchQueryText:(id)arg1 ;
-(id)getSearchExperimentIds;
-(void)setSearchExperimentIds:(id)arg1 ;
-(BOOL)getLoadedFromCache;
-(void)setLoadedFromCache:(BOOL)arg1 ;
-(id)getSearchResults;
-(id)getResultCacheInformation;
-(void)setResultCacheInformation:(id)arg1 ;
-(id)getSearchResultTimestamp;
-(void)setSearchResultTimestamp:(id)arg1 ;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSearchResults:(id)arg1 ;
-(id)asDictionary;
@end
