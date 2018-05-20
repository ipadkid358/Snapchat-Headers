/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSearchQuery, NSString;

@interface SCSearchSpellCorrectionSectionDataModel : NSObject <NSCopying> {

	SCSearchQuery* _searchQuery;
	NSString* _spellCorrectedQueryText;
	NSString* _escapeHatchQueryText;

}

@property (nonatomic,copy,readonly) SCSearchQuery * searchQuery;                     //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy,readonly) NSString * spellCorrectedQueryText;              //@synthesize spellCorrectedQueryText=_spellCorrectedQueryText - In the implementation block
@property (nonatomic,copy,readonly) NSString * escapeHatchQueryText;                 //@synthesize escapeHatchQueryText=_escapeHatchQueryText - In the implementation block
-(id)initWithSearchQuery:(id)arg1 spellCorrectedQueryText:(id)arg2 escapeHatchQueryText:(id)arg3 ;
-(NSString *)spellCorrectedQueryText;
-(NSString *)escapeHatchQueryText;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCSearchQuery *)searchQuery;
@end
