/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSString, NSDate;

@interface SCDirectoryScrubMatcher : NSObject {

	NSPredicate* _match;
	NSString* _pattern;
	unsigned long long _matchType;
	NSDate* _oldestLastModified;
	BOOL _lastModifiedRequired;

}

@property (nonatomic,copy,readonly) NSString * pattern; 
-(id)_predicateForType:(unsigned long long)arg1 parameter:(id)arg2 ;
-(id)initWithMatch:(id)arg1 type:(unsigned long long)arg2 olderThan:(double)arg3 lastModifiedRequired:(BOOL)arg4 ;
-(unsigned long long)match:(id)arg1 lastModified:(id)arg2 ;
-(NSString *)pattern;
@end

