/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/AspectInfo.h>

@protocol AspectInfo <NSObject>
@required
-(id)originalInvocation;
-(id)arguments;
-(id)instance;

@end


@class NSArray, NSInvocation, NSString;

@interface AspectInfo : NSObject <AspectInfo> {

	NSArray* _arguments;
	id _instance;
	NSInvocation* _originalInvocation;

}

@property (nonatomic,readonly) id instance;                                    //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) NSArray * arguments;                            //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,readonly) NSInvocation * originalInvocation;              //@synthesize originalInvocation=_originalInvocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSInvocation *)originalInvocation;
-(id)initWithInstance:(id)arg1 invocation:(id)arg2 ;
-(NSArray *)arguments;
-(id)instance;
@end

