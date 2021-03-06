/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface SCASearchrankingQuery : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* searchQueryId;
	NSNumber* queryIsUrl;
	NSNumber* queryIsSuggestion;
	NSNumber* isPrefetch;
	NSNumber* hasSearchActivityOnPrevDates;
	long long searchQueryType;
	long long searchResultsType;
	long long searchQueryContext;
	long long searchQuerySource;
	long long source;
	NSString* searchSessionId;
	NSString* searchQueryEntityId;
	NSString* searchQueryText;
	NSString* s2CellId;
	NSString* userLanguagePreferences;
	NSString* searchExperimentIds;
	NSString* inputLanguage;
	NSDate* clientTimestamp;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getSource;
-(long long)getSearchQueryId;
-(void)setSearchQueryId:(long long)arg1 ;
-(id)getSearchSessionId;
-(void)setSearchSessionId:(id)arg1 ;
-(id)getClientTimestamp;
-(BOOL)getQueryIsUrl;
-(void)setQueryIsUrl:(BOOL)arg1 ;
-(BOOL)getQueryIsSuggestion;
-(void)setQueryIsSuggestion:(BOOL)arg1 ;
-(BOOL)getIsPrefetch;
-(void)setIsPrefetch:(BOOL)arg1 ;
-(long long)getHasSearchActivityOnPrevDates;
-(void)setHasSearchActivityOnPrevDates:(long long)arg1 ;
-(long long)getSearchQueryType;
-(void)setSearchQueryType:(long long)arg1 ;
-(long long)getSearchResultsType;
-(void)setSearchResultsType:(long long)arg1 ;
-(long long)getSearchQueryContext;
-(void)setSearchQueryContext:(long long)arg1 ;
-(long long)getSearchQuerySource;
-(void)setSearchQuerySource:(long long)arg1 ;
-(id)getSearchQueryEntityId;
-(void)setSearchQueryEntityId:(id)arg1 ;
-(id)getSearchQueryText;
-(void)setSearchQueryText:(id)arg1 ;
-(id)getS2CellId;
-(void)setS2CellId:(id)arg1 ;
-(id)getUserLanguagePreferences;
-(void)setUserLanguagePreferences:(id)arg1 ;
-(id)getSearchExperimentIds;
-(void)setSearchExperimentIds:(id)arg1 ;
-(id)getInputLanguage;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInputLanguage:(id)arg1 ;
-(void)setClientTimestamp:(id)arg1 ;
-(id)asDictionary;
@end

