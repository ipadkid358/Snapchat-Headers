/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SCMarkDownParser : NSObject {

	NSString* _displayString;
	NSArray* _links;
	NSArray* _targets;
	NSArray* _colors;

}

@property (readonly) NSString * displayString;              //@synthesize displayString=_displayString - In the implementation block
@property (readonly) NSArray * links;                       //@synthesize links=_links - In the implementation block
@property (readonly) NSArray * targets;                     //@synthesize targets=_targets - In the implementation block
@property (readonly) NSArray * colors;                      //@synthesize colors=_colors - In the implementation block
-(void)parser:(id)arg1 ;
-(long long)typeOfString:(id)arg1 ;
-(long long)reverseTypeOpen:(long long)arg1 ;
-(id)typeToString:(long long)arg1 ;
-(long long)assignType:(long long)arg1 ;
-(id)tokenizer:(id)arg1 ;
-(long long)stringToType:(id)arg1 ;
-(id)initWithMarkDownString:(id)arg1 ;
-(NSString *)displayString;
-(NSArray *)colors;
-(NSArray *)links;
-(NSArray *)targets;
@end

