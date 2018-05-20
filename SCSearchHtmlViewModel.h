/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SCSearchHtmlViewModel : NSObject <NSCopying> {

	NSString* _html;
	NSString* _baseUrl;
	NSNumber* _cellHeight;
	NSNumber* _contentOffset;

}

@property (nonatomic,copy,readonly) NSString * html;                       //@synthesize html=_html - In the implementation block
@property (nonatomic,copy,readonly) NSString * baseUrl;                    //@synthesize baseUrl=_baseUrl - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * cellHeight;                 //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * contentOffset;              //@synthesize contentOffset=_contentOffset - In the implementation block
-(id)initWithHtml:(id)arg1 baseUrl:(id)arg2 cellHeight:(id)arg3 contentOffset:(id)arg4 ;
-(NSString *)baseUrl;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)contentOffset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)html;
-(NSNumber *)cellHeight;
@end

